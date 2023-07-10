/****************************************************************************
 * 2023.6 J2JKZ3OE2EQPHV5
 ****************************************************************************/

using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	public partial class BoxMats
	{
		[SerializeField] public UnityEngine.UI.RawImage RawImage;

		public void Clear()
		{
			RawImage = null;
		}

		public override string ComponentName
		{
			get { return "BoxMats";}
		}
	}
}
