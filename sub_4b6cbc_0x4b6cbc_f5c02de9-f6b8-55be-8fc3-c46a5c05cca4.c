// ============================================================
// 函数名称: sub_4b6cbc
// 虚拟地址: 0x4b6cbc
// WARP GUID: f5c02de9-f6b8-55be-8fc3-c46a5c05cca4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetProcAddress
// [内部子函数调用]: sub_40cca8
// [被调用的父级函数]: sub_4b6e7c
// ============================================================

voidsub_4b6cbc()
{
    // 第一条实际指令: if (data_532f0c != 0)
    if (data_532f0c != 0)
        return 
    
    int16_t x87control
    data_532f0c = sub_40cca8("olepro32.dll", SEM_NOOPENFILEERRORBOX, x87control)
    
    if (data_532f0c == 0)
        return 
    
    data_532f10 = GetProcAddress(data_532f0c, "OleCreatePropertyFrame")
    data_532f14 = GetProcAddress(data_532f0c, "OleCreateFontIndirect")
    data_532f18 = GetProcAddress(data_532f0c, "OleCreatePictureIndirect")
    data_532f1c = GetProcAddress(data_532f0c, "OleLoadPicture")
}
