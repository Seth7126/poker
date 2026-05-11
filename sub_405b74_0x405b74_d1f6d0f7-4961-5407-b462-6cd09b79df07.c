// ============================================================
// 函数名称: sub_405b74
// 虚拟地址: 0x405b74
// WARP GUID: d1f6d0f7-4961-5407-b462-6cd09b79df07
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4027e0, sub_405b40
// [被调用的父级函数]: sub_4b6b8d, sub_470e4b, sub_470f48
// ============================================================

int32_t __convention("regparm")sub_405b74(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return sub_405b40(arg1) __tailcall
    
    int32_t* var_c = arg2
    int32_t* ecx_1 = *arg1
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 8))(ecx_1)
        arg2 = var_c
    
    int32_t result = (**arg2)(var_c, arg3, arg1)
    
    if (result == 0)
        return result
    
    result.b = 0x17
    noreturn sub_4027e0(result) __tailcall
}
