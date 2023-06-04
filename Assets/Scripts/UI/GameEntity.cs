using PICOVRDEMO;
using QFramework;
using System.Collections;
using System.Collections.Generic;
using Tilia.Input.UnityInputManager;
using UnityEngine;

namespace PICOVRDEMO
{
    public class GameEntity : MonoSingleton<GameEntity>
    {
        public UnityInputManagerButtonAction leftxbutton;

        private void Awake()
        {
            ResKit.Init();
        }
        private void Start()
        {
            ActionKit.Delay(5, () =>
            {
                UIKit.OpenPanel<Panel_Login>();
            }).Start(this);
        }

        public void RegitstTestHandle()
        {
            leftxbutton.Activated.AddListener(b =>
            {
                if(b)
                {
                    Debug.Log("≤‚ ‘◊Û ÷±˙X");
                    UIKit.OpenPanel<Panel_Design>();
                }
            });
        }
    }
}

