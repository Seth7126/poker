// ============================================================
// 函数名称: sub_4b0322
// 虚拟地址: 0x4b0322
// WARP GUID: bd987dab-d433-58a2-b514-f0002105af7b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_403844, sub_4b1304, sub_403898, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4b0322(int32_t* arg1 @ ebp, int32_t* arg2, int32_t arg3, int32_t arg4, void* const arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: sub_403844()
    sub_403844()
    sub_403898(arg2)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg2
    sub_4030d0(*(*(arg1[-3] + 0xc) + 0x78))
    sub_4030d0(arg1[-3])
    *(arg1[-1] + 0x104)
    int32_t esi
    int32_t edi
    sub_4b1304(*(arg1[-1] + 0x108), esi, edi)
    void* eax_7
    eax_7.b = *(arg1[-2] + 0x90)
    char temp1 = eax_7.b
    eax_7.b -= 2
    char temp2_1
    
    if (temp1 != 2)
        temp2_1 = eax_7.b
        eax_7.b -= 3
    
    if (temp1 == 2 || temp2_1 == 3)
        arg3 = 0
        int32_t arg_28 = 0
        *(arg1[-2] + 0x94)
        int32_t ecx_1
        ecx_1.b = 1
        (*(*arg1[-1] + 0x80))()
    
    fsbase->NtTib.ExceptionList = arg4
    int32_t result = sub_403e1c(&arg1[-5], 2)
    *arg1
    return result
}
