// ============================================================
// 函数名称: GetEnhMetaFileHeader
// 虚拟地址: 0x4070c8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41c1fc, sub_41c820, sub_41c730, sub_41c2ec, sub_41cbd0, sub_41c508
// ============================================================

uint32_t __stdcallGetEnhMetaFileHeader(HENHMETAFILE hemf, uint32_t nSize, ENHMETAHEADER* lpEnhMetaHeader)
{
    // 第一条实际指令: return GetEnhMetaFileHeader(hemf, nSize, lpEnhMetaHeader) __tailcall
    return GetEnhMetaFileHeader(hemf, nSize, lpEnhMetaHeader) __tailcall
}
