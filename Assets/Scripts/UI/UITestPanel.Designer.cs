using System;
using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	// Generate Id:cd81b81f-cf31-4c18-b875-e92aeb00661e
	public partial class UITestPanel
	{
		public const string Name = "UITestPanel";
		
		
		private UITestPanelData mPrivateData = null;
		
		protected override void ClearUIComponents()
		{
			
			mData = null;
		}
		
		public UITestPanelData Data
		{
			get
			{
				return mData;
			}
		}
		
		UITestPanelData mData
		{
			get
			{
				return mPrivateData ?? (mPrivateData = new UITestPanelData());
			}
			set
			{
				mUIData = value;
				mPrivateData = value;
			}
		}
	}
}
