// ============================================================
// 函数名称: sub_43534c
// 虚拟地址: 0x43534c
// WARP GUID: e1fc75aa-c047-5c67-b635-cbf7e3f9cfb9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4352d0, sub_4333cc
// [被调用的父级函数]: sub_435478
// ============================================================

int32_t __convention("regparm")sub_43534c(void* arg1, void* arg2)
{
    // 第一条实际指令: void* eax_1 = *(arg2 + 0xc)
    void* eax_1 = *(arg2 + 0xc)
    int32_t result
    
    if (eax_1 == 0)
        result = sub_4333cc(arg2) + *(arg2 + 0x20)
    else
        result = *(eax_1 + 0x20)
    
    int32_t __saved_ebp
    int32_t* var_14 = &__saved_ebp
    sub_4352d0(*(*(arg1 + 0x64) + 8), arg2)
    return result
}
