/****************************************************************************
 * 2023.6 J2JKZ3OE2EQPHV5
 ****************************************************************************/

using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using QFramework;
using static QFramework.Example.InjectExample;

namespace PICOVRDEMO
{
	public partial class Handle2 : UIElement
	{
		public Toggle tg_image;
		public Sprite[] sprites;
		public Texture2D[] textures;
		public int currentselect = 0;
		private List<Toggle> toggles = new List<Toggle>();	
		private void Awake()
		{
		}
		public override void Init()
		{
			base.Init();
			for (int i = 0; i < sprites.Length; i++)
			{
				Toggle tg = Instantiate(tg_image, Content);
				int a = i;
				tg.group = Content.GetComponent<ToggleGroup>();
                tg.transform.Find("Background/Target").GetComponent<Image>().sprite = sprites[i];

                tg.onValueChanged.AddListener(b =>
				{
					if(b)
					{
						Show.sprite = sprites[a];
						currentselect = a;
						GameEntity.Instance.mat.SetTexture("_MainTex", textures[a]);
                    }
				});
				if(i == 0)
				{
					tg.isOn = true;
				}
                toggles.Add(tg);

            }
			toggles[0].isOn = true;
		}

		public override void Open()
		{
			base.Open();
            toggles[0].isOn = true;
            Show.sprite = sprites[0];
			currentselect = 0;
			GameEntity.Instance.boxesMats[GameEntity.Instance.currentmat].SetTexture("_MainTex", textures[0]);
        }

		protected override void OnBeforeDestroy()
		{
		}
	}
}