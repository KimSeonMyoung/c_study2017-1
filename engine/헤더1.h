#pragma once



namespace myGdiplusGame {
	
	const int g_nTileSize = 16;
	const int g_nTileXCount = 8;

	void drawTile(Graphics *pGrp, Image *pImgBasicTile, int nPosX, int nPosY, int nTileIndex)
	{
		//int nTileIndex = 14;
		pGrp->DrawImage(pImgBasicTile,
			Rect(nPosX, nPosY, g_nTileSize, g_nTileSize),
			g_nTileSize * (nTileIndex % g_nTileXCount), //���� x ��ġ
			g_nTileSize * (nTileIndex / g_nTileXCount),  //���� y ��ġ
			g_nTileSize, g_nTileSize,
			UnitPixel);
	}

}
