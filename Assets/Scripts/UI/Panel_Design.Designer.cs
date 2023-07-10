using System;
using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	// Generate Id:10ce18e0-5459-4f60-b917-4d3820fcf0f2
	public partial class Panel_Design
	{
		public const string Name = "Panel_Design";
		
		[SerializeField]
		public RectTransform HandController;
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
		[SerializeField]
		public Handle2 Handle2;
		[SerializeField]
		public Result Result;
		
		private Panel_DesignData mPrivateData = null;
		
		protected override void ClearUIComponents()
		{
			HandController = null;
			Left = null;
			Right = null;
			Tg_base = null;
			Tg_textures = null;
			Handle1 = null;
			Handle2 = null;
			Result = null;
			
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
