// ============================================================
// 函数名称: sub_416990
// 虚拟地址: 0x416990
// WARP GUID: 96fedb7c-3d2d-5ba2-87e1-9492cf517699
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4038c8, sub_405b40, sub_405ba0, sub_402754, sub_40276c
// [被调用的父级函数]: 无
// ============================================================

int32_t*sub_416990(void* arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_30 = ebx
    int32_t esi
    int32_t var_34 = esi
    int32_t edi
    int32_t var_38 = edi
    int32_t* arg_8
    sub_405ba0(arg_8)
    int32_t* var_3c = &var_4
    int32_t (* var_40)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_2
    int32_t var_8 = 0
    int32_t var_1c = 0
    int32_t var_18 = 0
    int32_t var_24 = 0
    int32_t var_20 = 0
    int32_t* var_48 = &var_4
    int32_t (* var_4c)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t i_2
    
    if (arg3 != 0)
        if (arg3 s<= 0)
            i_2 = arg2
        else
            i_2 = 0x100000
    else if (arg2 u<= 0x100000)
        i_2 = arg2
    else
        i_2 = 0x100000
    
    int32_t eax_3 = sub_402754(i_2)
    int32_t* var_54 = &var_4
    int32_t (* var_58)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    while (true)
        if (arg3 != 0)
            if (arg3 s<= 0)
                break
        else if (arg2 u<= 0)
            break
        
        int32_t i
        
        if (arg3 != 0)
            if (arg3 s<= 0)
                i = arg2
            else
                i = 0x7fffffff
        else if (arg2 u<= 0x7fffffff)
            i = arg2
        else
            i = 0x7fffffff
        
        int32_t i_1
        
        for (; i s> 0; i -= i_1)
            i_1 = i s<= i_2 ? i : i_2
            
            int32_t eax_7
            int32_t edx_2
            edx_2:eax_7 = sx.q((*(**(arg1 + 0xc) + 4))())
            int32_t temp4_1 = var_1c
            var_1c += eax_7
            var_18 = adc.d(var_18, edx_2, temp4_1 + eax_7 u< temp4_1)
            int32_t var_2c = 0
            int32_t var_28_1 = 0
            int32_t* eax_9 = arg_8
            int32_t var_8_1 = (*(*eax_9 + 0x10))(eax_9, eax_3, i_1, &var_2c)
            int32_t eax_12 = var_2c
            int32_t temp5_1 = var_24
            var_24 += eax_12
            var_20 = adc.d(var_20, var_28_1, temp5_1 + eax_12 u< temp5_1)
            
            if (var_8_1 == 0 && i_1 != var_2c)
                var_8_1 = 0x80004005
            
            if (var_8_1 != 0)
                sub_4038c8(ExceptionList, var_58)
                fsbase->NtTib.ExceptionList = ExceptionList_1
                fsbase->NtTib.ExceptionList = ExceptionList_2
                int32_t var_3c_1 = 0x416b6b
                int32_t** eax_20 = &arg_8
                sub_405b40(eax_20)
                return eax_20
        
        int32_t eax_15
        int32_t edx_5
        edx_5:eax_15 = sx.q(i)
        int32_t temp3_1 = arg2
        arg2 -= eax_15
        arg3 = sbb.d(arg3, edx_5, temp3_1 u< eax_15)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_54_1 = 0x416b33
    sub_40276c(eax_3)
    
    if (arg5 != 0)
        *arg5 = var_24
        arg5[1] = var_20
    
    int32_t* eax_19 = arg4
    
    if (eax_19 != 0)
        eax_19 = arg4
        *eax_19 = var_1c
        eax_19[1] = var_18
    
    return eax_19
}
