// ============================================================
// 函数名称: sub_403844
// 虚拟地址: 0x403844
// WARP GUID: 897ec010-f28c-54ae-a9fa-90d7d002c871
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_406c44, sub_4030d0, sub_403440
// [被调用的父级函数]: sub_4b0322, sub_41bc20, sub_4ab20c, sub_41be36, sub_414072, sub_413ee8, sub_41f874, sub_495c42, sub_41d812, sub_41eb67, sub_426761, sub_41e3af, sub_495b3f, sub_4033fe, sub_428fa4, sub_41f4d3, sub_41dd08, sub_4a7e8d, sub_4147ca, sub_413da3, sub_41f7be, sub_414fde, sub_413e43, sub_4ab06a, sub_41efb4, sub_4ac5c8
// ============================================================

int32_t __stdcallsub_403844(struct _EXCEPTION_REGISTRATION_RECORD** arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, void* arg6)
{
    // 第一条实际指令: *(arg6 + 4) = 0x40388f
    *(arg6 + 4) = 0x40388f
    int32_t* eax = sub_406c44()
    int32_t* edx = *eax
    *eax = *edx
    int32_t* eax_1 = edx[3]
    eax_1[1] &= 0xfffffffd
    
    if (*eax_1 != 0xeedfade)
        sub_4030d0(edx[2])
        sub_403440()
    
    TEB* fsbase
    *arg1 = fsbase->NtTib.ExceptionList->Next
    return 1
}
