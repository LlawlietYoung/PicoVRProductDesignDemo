/****************************************************************************
 * 2023.6 J2JKZ3OE2EQPHV5
 ****************************************************************************/

using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	public partial class Handle2
	{
		[SerializeField] public RectTransform Content;
		[SerializeField] public UnityEngine.UI.Image Show;

		public void Clear()
		{
			Content = null;
			Show = null;
		}

		public override string ComponentName
		{
			get { return "Handle2";}
		}
	}
}
