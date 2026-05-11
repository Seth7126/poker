// ============================================================
// 函数名称: sub_46026c
// 虚拟地址: 0x46026c
// WARP GUID: 73670e5e-9f13-5373-9b15-f2880cf9852d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45340c
// [被调用的父级函数]: sub_458c20, sub_45ce9c, sub_4584d0, sub_45cd84, sub_463d40, sub_4627a0, sub_462938
// ============================================================

int32_t __fastcallsub_46026c(void* arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t result = arg4
    int32_t result_1 = result
    int32_t* ebx_1 = arg3 + (arg2 << 2)
    int32_t* esi_1 = arg1 + (arg6 << 2)
    
    for (int32_t i = arg5; i s> 0; i -= 1)
        int32_t eax = *ebx_1
        ebx_1 = &ebx_1[1]
        int32_t edx_3 = *esi_1
        esi_1 = &esi_1[1]
        result = sub_45340c(edx_3, eax, result_1)
    
    return result
}
