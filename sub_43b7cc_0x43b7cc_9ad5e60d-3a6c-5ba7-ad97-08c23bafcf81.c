// ============================================================
// 函数名称: sub_43b7cc
// 虚拟地址: 0x43b7cc
// WARP GUID: 9ad5e60d-3a6c-5ba7-ad97-08c23bafcf81
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404188, sub_403e4c
// [被调用的父级函数]: sub_43990c, sub_43bf0c
// ============================================================

int32_t __convention("regparm")sub_43b7cc(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = sub_404188(arg1[9], arg2)
    int32_t result = sub_404188(arg1[9], arg2)
    bool z
    
    if (z)
        return result
    
    sub_403e4c(&arg1[9], arg2)
    int32_t edx_2
    edx_2.b = 1
    return (*(*arg1 + 0x38))()
}
