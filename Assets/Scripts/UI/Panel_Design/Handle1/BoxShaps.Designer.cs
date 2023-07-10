/****************************************************************************
 * 2023.6 J2JKZ3OE2EQPHV5
 ****************************************************************************/

using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	public partial class BoxShaps
	{
		[SerializeField] public UnityEngine.UI.Toggle Box1;
		[SerializeField] public UnityEngine.UI.Toggle Box2;
		[SerializeField] public UnityEngine.UI.Toggle Box3;
		[SerializeField] public UnityEngine.UI.Toggle Box4;
		[SerializeField] public UnityEngine.UI.Toggle Box5;
		[SerializeField] public UnityEngine.UI.Toggle Box6;
		[SerializeField] public UnityEngine.UI.Toggle Box7;
		[SerializeField] public UnityEngine.UI.Toggle Box8;
		[SerializeField] public UnityEngine.UI.Image ShowPanel;

		public void Clear()
		{
			Box1 = null;
			Box2 = null;
			Box3 = null;
			Box4 = null;
			Box5 = null;
			Box6 = null;
			Box7 = null;
			Box8 = null;
			ShowPanel = null;
		}

		public override string ComponentName
		{
			get { return "BoxShaps";}
		}
	}
}
