using System;
using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	// Generate Id:ebc1a8ad-2bac-4444-87eb-d7df9d1b87cc
	public partial class UIHomePanel
	{
		public const string Name = "UIHomePanel";
		
		
		private UIHomePanelData mPrivateData = null;
		
		protected override void ClearUIComponents()
		{
			
			mData = null;
		}
		
		public UIHomePanelData Data
		{
			get
			{
				return mData;
			}
		}
		
		UIHomePanelData mData
		{
			get
			{
				return mPrivateData ?? (mPrivateData = new UIHomePanelData());
			}
			set
			{
				mUIData = value;
				mPrivateData = value;
			}
		}
	}
}
