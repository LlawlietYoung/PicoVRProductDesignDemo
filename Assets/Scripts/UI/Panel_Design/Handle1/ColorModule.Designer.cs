/****************************************************************************
 * 2023.7 J2JKZ3OE2EQPHV5
 ****************************************************************************/

using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	public partial class ColorModule
	{
		[SerializeField] public Envirment Envirment;
		[SerializeField] public EnvirmentColor EnvirmentColor;
		[SerializeField] public BoxColor BoxColor;

		public void Clear()
		{
			Envirment = null;
			EnvirmentColor = null;
			BoxColor = null;
		}

		public override string ComponentName
		{
			get { return "ColorModule";}
		}
	}
}
