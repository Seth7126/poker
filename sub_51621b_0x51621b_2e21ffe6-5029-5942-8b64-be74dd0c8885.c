// ============================================================
// 函数名称: sub_51621b
// 虚拟地址: 0x51621b
// WARP GUID: 2e21ffe6-5029-5942-8b64-be74dd0c8885
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_514ef8, sub_4040c4, sub_51300c, sub_40401c, sub_514cc4, sub_51635a, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_51621b(void* arg1 @ esi, void* arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3, int32_t arg4, int32_t arg5, int16_t arg6, int32_t arg7, int32_t (* arg8)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3))
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    char* eax_9 = (*ebx)()
    *eax_9 += eax_9.b
    char temp1 = *(arg1 + 0x65)
    *(arg1 + 0x65) += eax_9.b
    
    if (temp1 != neg.b(eax_9.b))
        *(arg2 + 0x73) &= arg5.b
        *0x687265d9
        *0x687265d9 &= arg6:1.b
        jump("angen: ")
    
    int32_t ecx_1
    int32_t* ebp_1
    ecx_1, ebp_1 = sub_51300c(arg5, arg2 - 0x84, __return_addr, 0x6872656c)
    sub_40401c(ecx_1, &ebp_1[-0x63])
    sub_4040c4(&ebp_1[-0x22], "h_c_read ", ebp_1[-0x23])
    sub_514cc4(arg3, ebp_1[-0x22])
    sub_514ef8(arg3, &ebp_1[-0x21], 0x6872656c)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg7
    sub_403e1c(&ebp_1[-0x65], 2)
    sub_403e1c(&ebp_1[-0x23], 2)
    return sub_51635a(ebp_1) __tailcall
}
