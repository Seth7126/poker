// ============================================================
// 函数名称: sub_490ca0
// 虚拟地址: 0x490ca0
// WARP GUID: 923ffd68-d5d4-5ef6-b8d6-51fda42677f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_490768
// [被调用的父级函数]: sub_519df0
// ============================================================

int32_t __convention("regparm")sub_490ca0(void** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = arg2
    int32_t ebx = arg2
    
    if (ebx s> 0)
        ebx = 0
    
    if (ebx s< 0xffffd8f0)
        ebx = 0xffffd8f0
    
    int32_t* eax = arg1[4]
    return sub_490768(arg1, "SetVol", (*(*eax + 0x3c))(eax, ebx))
}
