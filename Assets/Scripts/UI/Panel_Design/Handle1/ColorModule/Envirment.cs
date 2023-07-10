/****************************************************************************
 * 2023.6 J2JKZ3OE2EQPHV5
 ****************************************************************************/

using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	public partial class Envirment : UIElement
	{
		public Sprite[] sp_views;
		public Toggle[] tg_selectors;
		public Material[] skyboxs;
		private void Awake()
		{
		}

		public override void Init()
		{
            RawImage.texture = GameEntity.Instance.boxviewrt;
            base.Init();
			for (int i = 0; i < tg_selectors.Length; i++)
			{
				int aa = i;
				tg_selectors[i].onValueChanged.AddListener(b =>
				{
					if(b)
					{
                        //GameEntity.Instance.skyboxCamera.material = GameEntity.Instance.skyboxes[aa];
                        RenderSettings.skybox = GameEntity.Instance.skyboxes[aa];
						RenderSettings.customReflection = GameEntity.Instance.cubemaps[aa];
						DynamicGI.UpdateEnvironment();
                        envirmentView.sprite = sp_views[aa];
					}
				});
			}
		}
		public override void Show()
		{
			base.Show();
			foreach (var item in skyboxs)
			{
				item.SetColor("_Tint", Color.gray);
			}
			Tg_sand.isOn = true;
		}

		protected override void OnBeforeDestroy()
		{
		}
	}
}