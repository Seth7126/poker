// ============================================================
// 函数名称: sub_412b80
// 虚拟地址: 0x412b80
// WARP GUID: 25727ea2-e33d-57e9-9a29-17067ac69b85
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408fd0, sub_403430, sub_403420
// [被调用的父级函数]: 无
// ============================================================

HANDLE __convention("regparm")sub_412b80(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    HANDLE result = arg1[1]
    
    if (result s>= 0)
        result = sub_408fd0(result)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
