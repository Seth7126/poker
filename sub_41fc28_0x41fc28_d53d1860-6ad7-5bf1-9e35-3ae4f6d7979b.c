// ============================================================
// 函数名称: sub_41fc28
// 虚拟地址: 0x41fc28
// WARP GUID: d53d1860-6ad7-5bf1-9e35-3ae4f6d7979b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_419af8, sub_41e04c, sub_4190bc, sub_4191d8, sub_41dae0, sub_41dd64, sub_40faac, sub_419720
// [被调用的父级函数]: sub_41fb74
// ============================================================

int32_t* __fastcallsub_41fc28(uint32_t arg1)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    edx.b = 1
    int32_t* result = sub_41dae0(sub_41799a+0xe2, edx)
    int32_t __saved_ebp
    int32_t* var_2c = &__saved_ebp
    int32_t (* var_30)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*result + 0x40))(ExceptionList, var_30, var_2c)
    (*(*result + 0x34))()
    int32_t* eax_3 = sub_41e04c(result)
    sub_4191d8(eax_3[5], 0)
    sub_4190bc(eax_3[5])
    RECT var_1c
    sub_40faac((*(*result + 0x2c))(&var_1c, (*(*result + 0x20))()), 0, 0)
    sub_419720(eax_3, &var_1c)
    
    for (int32_t i = 0; i != 9; i += 1)
        for (int32_t __saved_edx_1 = 0; __saved_edx_1 != 9; __saved_edx_1 += 1)
            int32_t eax_12 = i & 0x80000001
            
            if (eax_12 s< 0)
                eax_12 = ((eax_12 - 1) | 0xfffffffe) + 1
            
            int32_t edx_7 = __saved_edx_1 & 0x80000001
            
            if (edx_7 s< 0)
                edx_7 = ((edx_7 - 1) | 0xfffffffe) + 1
            
            if (eax_12 == edx_7)
                sub_419af8(i, __saved_edx_1, eax_3, arg1)
    
    sub_41dd64(result)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
