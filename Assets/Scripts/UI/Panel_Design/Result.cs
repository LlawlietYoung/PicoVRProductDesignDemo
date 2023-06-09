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
	public partial class Result : UIElement
	{
		private void Awake()
		{
		}
		public override void Init()
		{
			base.Init();
			RawImage.texture = GameEntity.Instance.boxviewrt;
			Btn_remake.onClick.AddListener(Remake);
			Btn_save.onClick.AddListener(Save);
		}

		public void Save()
		{
			if(GameEntity.Instance.CreatBox())
			{

			}
			//Remake();
		}
		public void Remake()
		{
			UIKit.CloseAllPanel();
			UIKit.OpenPanel<Panel_Design>();

            GameEntity.Instance.boxes.ForEach(box =>
			{
				box.Hide();
			});
			GameEntity.Instance.boxesMats.ForEach(mat =>
			{
				mat.SetTexture("_MainTex", null);
			});
		}
		protected override void OnBeforeDestroy()
		{
		}
	}
}