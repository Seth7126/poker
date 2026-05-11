// ============================================================
// 函数名称: sub_408a00
// 虚拟地址: 0x408a00
// WARP GUID: d6254676-434b-5014-9a5a-fd492f45559d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CharUpperBuffA
// [内部子函数调用]: sub_40423c, sub_403ee0, sub_404078
// [被调用的父级函数]: sub_40c688
// ============================================================

char** __convention("regparm")sub_408a00(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: uint32_t cchLength = sub_404078(arg1)
    uint32_t cchLength = sub_404078(arg1)
    char** result = arg2
    sub_403ee0(result, sub_40423c(arg1), cchLength)
    
    if (cchLength s<= 0)
        return result
    
    return CharUpperBuffA(*arg2, cchLength)
}
