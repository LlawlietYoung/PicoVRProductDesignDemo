using PICOVRDEMO;
using QFramework;
using System.Collections;
using System.Collections.Generic;
using Tilia.Input.UnityInputManager;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.LowLevel;
using UnityEngine.InputSystem.XR;
using UnityEngine.XR;
using CommonUsages = UnityEngine.XR.CommonUsages;
using InputDevice = UnityEngine.XR.InputDevice;

namespace PICOVRDEMO
{
    public enum Inputstate
    {
        menuL,
        menuR,
        /// <summary>
        /// 左手柄扳机按键
        /// </summary>
        triggerL,
        triggerR,
        gripL,
        gripR,
        primaryL,
        /// <summary>
        /// 右手柄A
        /// </summary>
        primaryR,
        /// <summary>
        /// 左手柄B键
        /// </summary>
        secondaryL,
        secondaryR,
    }
    public class function
    {
        public bool pressed;
        public bool buttondown;
        public bool buttonup;
        public bool downonce;
        public bool lastButtonState;
    }

    public class GameEntity : MonoSingleton<GameEntity>
    {
        //public UnityInputManagerButtonAction leftxbutton;
        private InputDevice leftinputDevice, rightinputDevice;
        public GameObject[] boxes;
        public GameObject[] lights;
        public GameObject dirlight, pointlight, spotlight;

        public Material mat;
        public RenderTexture boxviewrt;

        public Skybox skyboxCamera;

        [HideInInspector]
        public bool menuValue_Ldown;
        [HideInInspector]
        public bool menuValue_Lup;

        [HideInInspector]
        /// <summary>
        /// 按下左手柄A键
        /// </summary>
        public bool primaryValue_L;
        [HideInInspector]
        /// <summary>
        /// 按下右手柄A键
        /// </summary>
        public bool primaryValue_R;
        [HideInInspector]
        /// <summary>
        /// 按下左手柄B键
        /// </summary>
        public bool secondaryValue_L;
        [HideInInspector]
        /// <summary>
        /// 按下右手柄B键
        /// </summary>
        public bool secondaryValue_R;
        [HideInInspector]
        /// <summary>
        /// 按下左手柄Trigger按键
        /// </summary>
        public bool triggerValue_L;
        [HideInInspector]
        /// <summary>
        /// 按下右手柄Trigger按键
        /// </summary>
        public bool triggerValue_R;
        [HideInInspector]
        public bool lastButtonState = false;
        Dictionary<Inputstate, function> Dicfunction = new Dictionary<Inputstate, function>();
        function menu_L = new function();
        function menu_R = new function();
        function trigger_L = new function();
        function trigger_R = new function();
        function grip_L = new function();
        function grip_R = new function();
        function primary_L = new function();
        function primary_R = new function();
        function secondary_L = new function();
        function secondary_R = new function();


        private void Awake()
        {
            ResKit.Init();

            Dicfunction.Add(Inputstate.menuL, menu_L);
            Dicfunction.Add(Inputstate.menuR, menu_R);
            Dicfunction.Add(Inputstate.triggerL, trigger_L);
            Dicfunction.Add(Inputstate.triggerR, trigger_R);

            Dicfunction.Add(Inputstate.primaryL, primary_L);
            Dicfunction.Add(Inputstate.primaryR, primary_R);
            Dicfunction.Add(Inputstate.secondaryL, secondary_L);
            Dicfunction.Add(Inputstate.secondaryR, secondary_R);

            Dicfunction.Add(Inputstate.gripL, grip_L);
            Dicfunction.Add(Inputstate.gripR, grip_R);

        }
        private void Start()
        {
#if UNITY_EDITOR
            UIKit.OpenPanel<Panel_Login>();
            return;
#endif
            ActionKit.Delay(5, () =>
            {
                UIKit.OpenPanel<Panel_Login>();
            }).Start(this);
        }

        public void RegitstTestHandle()
        {
            //leftxbutton.Activated.AddListener(b =>
            //{
            //    if(b)
            //    {
            //        Debug.Log("测试左手柄X");
            //        UIKit.OpenPanel<Panel_Design>();
            //    }
            //});
        }
        // Update is called once per frame
        void Update()
        {
            //列出所有输入设备，根据XR节点获取输入设备，必须先获取到输入设备，再获取对应输入设备的输入键值
            var rightDevice = new List<InputDevice>();

            var leftdevice = new List<InputDevice>();

            InputDevices.GetDevicesAtXRNode(XRNode.RightHand, rightDevice);

            InputDevices.GetDevicesAtXRNode(XRNode.LeftHand, leftdevice);

            if (rightDevice.Count != 0 && leftdevice.Count != 0)
            {
                InputDevice rightcontroller = rightDevice[0];

                InputDevice leftcontroller = leftdevice[0];
                leftcontroller.TryGetFeatureValue(CommonUsages.menuButton, out menu_L.pressed);
                rightcontroller.TryGetFeatureValue(CommonUsages.menuButton, out menu_R.pressed);

                leftcontroller.TryGetFeatureValue(CommonUsages.primaryButton, out primary_L.pressed);
                rightcontroller.TryGetFeatureValue(CommonUsages.primaryButton, out primary_R.pressed);

                leftcontroller.TryGetFeatureValue(CommonUsages.secondaryButton, out secondary_L.pressed);
                rightcontroller.TryGetFeatureValue(CommonUsages.secondaryButton, out secondary_R.pressed);

                leftcontroller.TryGetFeatureValue(CommonUsages.triggerButton, out trigger_L.pressed);
                rightcontroller.TryGetFeatureValue(CommonUsages.triggerButton, out trigger_R.pressed);

                leftcontroller.TryGetFeatureValue(CommonUsages.gripButton, out grip_L.pressed);
                rightcontroller.TryGetFeatureValue(CommonUsages.gripButton, out grip_R.pressed);
            }
            foreach (var it in Dicfunction)
            {
                if (it.Value.pressed)
                {
                    if (it.Value.downonce)
                    {
                        it.Value.buttondown = true;
                        it.Value.downonce = false;
                    }
                    else
                        it.Value.buttondown = false;
                }
                if (it.Value.lastButtonState && !it.Value.pressed)
                {
                    it.Value.buttonup = true;
                    it.Value.buttondown = false;
                    it.Value.downonce = true;
                }
                else
                {
                    it.Value.buttonup = false;
                }
                it.Value.lastButtonState = it.Value.pressed;
            }
            function leftaAction = Getfunction(Inputstate.primaryL);
            if(leftaAction.pressed)
            {
                Debug.Log("测试左手柄X");
                UIKit.OpenPanel<Panel_Design>();
            }
        }
        public function Getfunction(Inputstate inputstate)
        {
            function temp = new function();
            Dicfunction.TryGetValue(inputstate, out temp);
            return temp;
        }
    }
}

