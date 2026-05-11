// ============================================================
// 函数名称: sub_42b558
// 虚拟地址: 0x42b558
// WARP GUID: fdae3b6c-8ee3-5a82-a311-3545a4ec6469
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248, sub_42b778, sub_404188, sub_42b7a8, sub_41627c, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_42b558(void** arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    void* var_c = nullptr
    void* var_8 = arg2
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((arg1[0x10].b & 0x20) == 0)
        ebx = 0
    else
        char temp0_1 = arg1[8].b & 1
        
        if (temp0_1 != 0)
            ebx = 0
        else
            sub_42b778(0, &var_c)
            sub_404188(arg1[2], var_c)
            
            if (temp0_1 != 0)
                ebx = 0
            else
                int32_t* esi_1 = arg1[1]
                char eax_3
                
                if (esi_1 != 0)
                    eax_3 = sub_403248(esi_1, &data_4279b4)
                
                if (esi_1 == 0 || eax_3 == 0 || (esi_1[8].b & 1) == 0)
                    ebx.b = 1
                else
                    ebx = 0
    
    sub_41627c(arg1, var_8)
    
    if (ebx.b != 0)
        ebp_1 = sub_42b7a8(arg1, var_8)
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_42b5f5
    sub_403df8(&ebp_1[-2])
    return &ebp_1[-2]
}
