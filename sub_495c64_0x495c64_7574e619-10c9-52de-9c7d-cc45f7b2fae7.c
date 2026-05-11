// ============================================================
// 函数名称: sub_495c64
// 虚拟地址: 0x495c64
// WARP GUID: 7574e619-10c9-52de-9c7d-cc45f7b2fae7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: closesocket, WSACancelAsyncRequest
// [内部子函数调用]: sub_4032ac, sub_494e64, sub_4038c8, sub_40cc98, sub_4953dc, sub_4953e8
// [被调用的父级函数]: sub_49692d
// ============================================================

int32_t __convention("regparm")sub_495c64(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ecx
    int32_t var_8 = ecx
    sub_4953dc(arg1)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi = *(arg1 + 0x2c)
    int32_t ecx_1
    
    if (esi != 0)
        ecx_1, ebp_1 = sub_494e64(WSACancelAsyncRequest(esi))
    
    *(ebp_1[-1] + 0x2c) = 0
    
    if (arg2 == 0xffffffff || arg2 != *(ebp_1[-1] + 4))
        return sub_4038c8(ExceptionList, var_18)
    
    ecx_1.b = 3
    int32_t ebx
    ebx.w = 0xffff
    sub_4032ac(ebp_1[-1], ebp_1[-1], ecx_1)
    void* ebp_2 = sub_494e64(closesocket(*(ebp_1[-1] + 4)))
    *(*(ebp_2 - 4) + 4) = 0xffffffff
    *(*(ebp_2 - 4) + 0x18) = 2
    *(*(ebp_2 - 4) + 0x1c) = 0
    *(*(ebp_2 - 4) + 0x1a) = 0
    *(*(ebp_2 - 4) + 8) = 0
    sub_40cc98(*(ebp_2 - 4) + 0xc)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_495d35
    return sub_4953e8(*(ebp_2 - 4))
}
