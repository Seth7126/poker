// ============================================================
// 函数名称: sub_4a3e6c
// 虚拟地址: 0x4a3e6c
// WARP GUID: fe57ff3b-88fe-5766-a9a9-915f1e98ced9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a30d8, sub_403010, sub_4a3d84
// [被调用的父级函数]: sub_4a9320
// ============================================================

int32_t __fastcallsub_4a3e6c(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    int32_t var_8 = arg1
    int32_t eax
    int32_t var_8_1 = eax
    char eax_2
    void* edx
    eax_2, edx = sub_4a30d8()
    char i
    int32_t* var_10_3
    
    if (eax_2 == 0)
        var_10_3 = ebp
        i = sub_4a3d84(arg2, edx)
    else if (arg2 != 0xfffffffe)
        int32_t eax_8 = *(*data_530a6c + 0x28)
        
        if (arg2 s<= eax_8)
            var_10_3 = ebp
            i = sub_4a3d84(arg2, edx)
        else
            int32_t* var_10_2 = &__saved_ebp
            
            if (add_overflow(arg2, neg.d(eax_8)))
                sub_403010()
                noreturn
            
            i, edx, ebp = sub_4a3d84(arg2 - eax_8, data_530a6c)
            
            if (i == 0)
                var_10_3 = ebp
                i = sub_4a3d84(*(*data_530a6c + 0x28), edx)
    else
        do
            int32_t* var_10_1 = ebp
            i, edx, ebp = sub_4a3d84(*(*data_530a6c + 0x28), edx)
        while (i == 0)
    return i
}
