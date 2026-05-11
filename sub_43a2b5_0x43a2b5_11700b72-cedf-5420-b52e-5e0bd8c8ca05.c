// ============================================================
// 函数名称: sub_43a2b5
// 虚拟地址: 0x43a2b5
// WARP GUID: 11700b72-cedf-5420-b52e-5e0bd8c8ca05
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

char* __convention("regparm")sub_43a2b5(char* arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ ebp)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    __builtin_memcpy(&arg4[-4], arg3, 0x10)
    
    if (*(arg1 + 0x8a) != 0)
        void* ecx
        ecx.b = arg4[2].b
        *(arg1 + 0x8c)
        arg1 = (*(arg1 + 0x88))(ecx, &arg4[-4])
    
    *arg4
    return arg1
}
