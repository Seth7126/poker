// ============================================================
// 函数名称: sub_4ad123
// 虚拟地址: 0x4ad123
// WARP GUID: 63db8b1f-e78e-56a7-bc00-80ffc629e567
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ad140
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_4ad123(char* arg1 @ eax, int32_t arg2 @ ebp, int32_t* arg3 @ esi, int32_t arg4 @ edi, int32_t* arg5, void* arg6, int32_t* arg7, int32_t arg8, char* arg9)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *(arg4 + (arg2 << 1) + 0x6d) += arg1:1.b
    void* ebp = *arg5 * 0xffffff00
    *arg5 += 1
    *arg9 += arg9.b
    *(arg6 + 0x65) += arg7:1.b
    int32_t eflags
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(*(ebp + 0x72), arg5.w)
    *(ebp + 0x72) = temp0
    char* gsbase
    *(gsbase + arg9) += arg9.b
    return sub_4ad140(arg9, arg7) __tailcall
}
