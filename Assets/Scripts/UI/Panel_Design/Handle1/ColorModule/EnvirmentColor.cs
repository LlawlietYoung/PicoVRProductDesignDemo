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
	public partial class EnvirmentColor : UIElement
	{
		private void Awake()
		{
		}

		protected override void OnBeforeDestroy()
		{
		}
		public override void Init()
		{
			base.Init();
            RawImage.texture = GameEntity.Instance.boxviewrt;
            Panel.onColorChange += color =>
			{
				//lights.ForEach(li=>li.color = color);
				GameEntity.Instance.skyboxCamera.material.SetColor("_Tint", color);
			};
		}

	}
}