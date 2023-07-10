/****************************************************************************
 * 2023.6 J2JKZ3OE2EQPHV5
 ****************************************************************************/

using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using QFramework;
//using PXR_Audio.Spatializer;
using Color = UnityEngine.Color;

namespace PICOVRDEMO
{
	public class MatData
	{
		public Color color;
		public MaterialRendemodeSetting.BlendMode renderingMode;
		public float metal;
		public float smooth;
		public bool emission;
		public Color emiisioncolor;
	}

	public partial class BoxMats : UIElement
	{
        public Toggle[] tg_matselectors;
        public Sprite[] sp_matsprites;
		public Image ima_matview;
		public Renderer ren_matview;

		public MatData mat1, mat2, mat3, mat4, mat5, mat6, mat7, mat8, mat9;
        public MatData[] matDatas;

        //public Material basemat;
        public MatData currentmatdata;

        public Slider sl_cc, sl_fs, sl_tm;
		private void Awake()
		{

        }
        public override void Init()
        {
            base.Init();
            RawImage.texture = GameEntity.Instance.boxviewrt;
            mat1 = new MatData()
            {
                color = Color.white,
                renderingMode = MaterialRendemodeSetting.BlendMode.Opaque,
                metal = 0,
                smooth = 0.7f,
                emission = false,
                emiisioncolor = Color.black
            };
            mat2 = new MatData()
            {
                color = new Color(229f / 255, 165f / 255, 83f / 255),
                renderingMode = MaterialRendemodeSetting.BlendMode.Opaque,
                metal = 0.867f,
                smooth = 0.531f,
                emission = false,
                emiisioncolor = Color.black
            };
            mat3 = new MatData()
            {
                color = Color.white,
                renderingMode = MaterialRendemodeSetting.BlendMode.Opaque,
                metal = 0,
                smooth = 0.5f,
                emission = false,
                emiisioncolor = Color.black
            };
            mat7 = new MatData()
            {
                color = Color.clear,
                renderingMode = MaterialRendemodeSetting.BlendMode.Transparent,
                metal = 0,
                smooth = 0.921f,
                emission = false,
                emiisioncolor = Color.black
            };
            mat9 = new MatData()
            {
                color = new Color(161f / 255, 161f / 255, 161f / 255),
                renderingMode = MaterialRendemodeSetting.BlendMode.Opaque,
                metal = 1,
                smooth = 0.755f,
                emission = true,
                emiisioncolor = new Color(173f / 255, 173f / 255, 173f / 255)
            };
            matDatas = new MatData[] { mat1, mat2, mat3, mat4, mat5, mat6, mat7, mat8, mat9 };
            for (int i = 0; i < tg_matselectors.Length; i++)
            {
                int a = i;

                tg_matselectors[i].onValueChanged.AddListener(b =>
                {
                    if (b)
                    {
                        ima_matview.sprite = sp_matsprites[a];
                        SetMatData(GameEntity.Instance.mat, matDatas[a]);
                    }
                });
            }
            tg_matselectors[0].isOn = true;
        }
        private void SetMatData(Material mat,MatData data)
        {
            sl_cc.value = data.smooth;
            sl_fs.value = data.metal;
            sl_tm.value = data.color.a;
            mat.SetColor("_Color", data.color);
            MaterialRendemodeSetting.SetupMaterialWithBlendMode(mat, data.renderingMode);
            mat.SetFloat("_Metallic", data.metal);
            mat.SetFloat("_Glossiness", data.smooth); 
            if(data.emission)
            {
                mat.EnableKeyword("_EMISSION");
            }
            else
            {
                mat.DisableKeyword("_EMISSION");
            }
            mat.SetColor("_EmissionColor", data.emiisioncolor);
        }


        protected override void OnShow()
        {
            base.OnShow();
            tg_matselectors[0].isOn = true;
        }
        protected override void OnBeforeDestroy()
		{
		}
	}
}