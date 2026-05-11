// ============================================================
// 函数名称: sub_40fc2c
// 虚拟地址: 0x40fc2c
// WARP GUID: f0487028-fba9-5780-ba68-ace083f40603
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40fb5c, sub_403058, sub_403018, sub_40401c, sub_40301c, sub_4089dc, sub_403df8, sub_40fae4
// [被调用的父级函数]: sub_4156c0
// ============================================================

int32_t* __fastcallsub_40fc2c(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_118 = ebx
    int32_t esi
    int32_t var_11c = esi
    int32_t edi
    int32_t var_120 = edi
    void* var_14 = nullptr
    int32_t* var_124 = &var_4
    int32_t (* var_128)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax
    
    for (int32_t* i = sub_403018(eax); i != 0x40ecb8; i = sub_403058(i))
        int16_t* eax_3 = sub_40fae4(i)
        
        if (eax_3 != 0)
            int32_t ebx_2 = sx.d(*eax_3) - 1
            
            if (ebx_2 s>= 0)
                int32_t j_1 = ebx_2 + 1
                int32_t var_c_1 = 0
                int32_t j
                
                do
                    char var_114[0x100]
                    sub_40401c(sub_40301c(**(eax_3 + (var_c_1 << 2) + 2), &var_114), &var_114)
                    
                    if (sub_4089dc(var_14, arg2) != 0)
                        goto label_40fcd4
                    
                    var_c_1 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
    
    sub_40fb5c(arg2)
    label_40fcd4:
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_124_1)(int32_t* arg1 @ ebp, int32_t arg2 @ edi, int32_t arg3, int32_t arg4) =
        sub_40fcec
    int32_t* result = &var_14
    sub_403df8(result)
    return result
}
