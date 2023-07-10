/****************************************************************************
 * 2023.7 J2JKZ3OE2EQPHV5
 ****************************************************************************/

using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	public partial class EnvirmentColor
	{
		[SerializeField] public ColorManager Panel;
		[SerializeField] public UnityEngine.UI.RawImage RawImage;

		public void Clear()
		{
			Panel = null;
			RawImage = null;
		}

		public override string ComponentName
		{
			get { return "EnvirmentColor";}
		}
	}
}
