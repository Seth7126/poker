// ============================================================
// 函数名称: sub_4f0d44
// 虚拟地址: 0x4f0d44
// WARP GUID: 7e4799d2-7c8f-5444-9bf4-bf7287b5fd80
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_503984
// [被调用的父级函数]: sub_4ee958
// ============================================================

void* __fastcallsub_4f0d44(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4, int32_t arg5, char arg6, char arg7, char arg8, void* arg9)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    void* eax
    eax.b = arg8
    char var_14 = eax.b
    eax.b = arg7
    char var_18 = eax.b
    eax.b = arg6
    sub_503984(arg3, arg2, arg1, 0f, arg4, arg5, eax.b, var_18, var_14, arg9)
    *(*data_5301f4 + 0x1025e) = arg3.w
    void* result = *data_5301f4
    *(result + 0x10260) = arg2.w
    return result
}
