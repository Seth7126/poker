// ============================================================
// 函数名称: sub_4a2dd7
// 虚拟地址: 0x4a2dd7
// WARP GUID: 4d8d0d4d-dba8-5e24-8187-c04ca32cad82
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a2dd7(char* arg1, int16_t arg2, int32_t* arg3, void* arg4 @ ebp, int32_t arg5 @ edi, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: *arg3 -= 1
    *arg3 -= 1
    *arg1 += arg1.b
    char temp1 = *(arg4 + 0x78)
    *(arg4 + 0x78) += arg2:1.b
    
    if (temp1 != neg.b(arg2:1.b))
        *arg1 += arg1.b
        void* var_8 = arg4
        int32_t esi
        int32_t var_c = esi
        return (*(**(arg1 + 0x2c) + 8))()
    
    *(arg4 + 0x68) = rlc.b(*(arg4 + 0x68), 0x31, temp1 + arg2:1.b u< temp1)
    *(arg5 * 9 + 0x30) += arg1:1.b
    TEB* fsbase
    *(fsbase + arg1) = &__return_addr
    data_532580 += 1
    fsbase->NtTib.ExceptionList = __return_addr
    return 0
}
