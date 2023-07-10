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
	public partial class BoxColor : UIElement
	{
		private void Awake()
		{
		}
		public override void Init()
		{
			base.Init();
            RawImage.texture = GameEntity.Instance.boxviewrt;
            Panel.onColorChange += color =>
			{
				GameEntity.Instance.mat.color = color;
			};
		}
		protected override void OnBeforeDestroy()
		{
		}
	}
}