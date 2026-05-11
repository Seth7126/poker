// ============================================================
// 函数名称: sub_41c820
// 虚拟地址: 0x41c820
// WARP GUID: 36a5bce0-f3e9-5d93-8826-89ad69041189
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MulDiv, GetEnhMetaFileHeader
// [内部子函数调用]: sub_41c3a4, sub_41c7e0
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_41c820(int32_t* arg1, int32_t arg2, int32_t arg3 @ esi)
{
    // 第一条实际指令: ENHMETAHEADER enhMetaHeader
    ENHMETAHEADER enhMetaHeader
    int32_t entry_ebx
    enhMetaHeader.szlMicrometers.cy = entry_ebx
    enhMetaHeader.szlMicrometers.cx = arg3
    
    if (arg1[8] == 0)
        sub_41c3a4(arg1)
    
    void* result = arg1[8]
    
    if (*(result + 0x18) != 0)
        return sub_41c7e0(arg1, MulDiv(arg2, 0x9ec, data_53165c))
    
    HENHMETAFILE hemf = *(result + 8)
    
    if (hemf != 0)
        GetEnhMetaFileHeader(hemf, 0x64, &enhMetaHeader)
        return sub_41c7e0(arg1, 
            MulDiv(arg2, enhMetaHeader.szlMillimeters.cx * 0x64, enhMetaHeader.szlDevice.cx))
    
    *(result + 0x1c) = arg2
    return result
}
