// ============================================================
// 函数名称: sub_49d2a3
// 虚拟地址: 0x49d2a3
// WARP GUID: 2c5d7028-6f85-5b19-be5c-8c217bb41171
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49d2b9
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_49d2a3(int32_t arg1, int16_t arg2, char* arg3 @ eax, void* arg4 @ ebp, uint16_t* arg5, int32_t arg6, int32_t arg7, int32_t arg8, char* arg9, int32_t* arg10)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    *entry_ebx += 1
    *arg3 += arg3.b
    *(arg4 + 0x63) += arg3.b
    char temp0 = arg3[0x30049d2]
    arg3[0x30049d2] += arg2:1.b
    *(arg1 * 3 + 0x64) = adc.b(*(arg1 * 3 + 0x64), arg2.b, temp0 + arg2:1.b u< temp0)
    
    if (arg4 - 1 s>= 0)
        return sub_49d2b9(arg10, arg8, arg9, arg5) __tailcall
    
    *arg9
    *arg9 = ror.d(*arg9, arg9.b)
    bool c_1 = unimplemented  {ror dword [ecx], cl}
    *arg10 = adc.b(*arg10, arg10.b, c_1)
    *arg10 += arg10.b
    undefined
}
