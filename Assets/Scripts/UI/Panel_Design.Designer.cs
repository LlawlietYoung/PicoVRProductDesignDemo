using System;
using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	// Generate Id:574ed2bd-04ba-4f2c-b566-7f85bcd42c2a
	public partial class Panel_Design
	{
		public const string Name = "Panel_Design";
		
		[SerializeField]
		public UnityEngine.UI.Button Left;
		[SerializeField]
		public UnityEngine.UI.Button Right;
		[SerializeField]
		public UnityEngine.UI.Toggle Tg_base;
		[SerializeField]
		public UnityEngine.UI.Toggle Tg_textures;
		[SerializeField]
		public Handle1 Handle1;
		
		private Panel_DesignData mPrivateData = null;
		
		protected override void ClearUIComponents()
		{
			Left = null;
			Right = null;
			Tg_base = null;
			Tg_textures = null;
			Handle1 = null;
			
			mData = null;
		}
		
		public Panel_DesignData Data
		{
			get
			{
				return mData;
			}
		}
		
		Panel_DesignData mData
		{
			get
			{
				return mPrivateData ?? (mPrivateData = new Panel_DesignData());
			}
			set
			{
				mUIData = value;
				mPrivateData = value;
			}
		}
	}
}
