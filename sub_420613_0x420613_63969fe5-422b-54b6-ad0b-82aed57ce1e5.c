// ============================================================
// 函数名称: sub_420613
// 虚拟地址: 0x420613
// WARP GUID: 63969fe5-422b-54b6-ad0b-82aed57ce1e5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: lstrcpyA, SystemParametersInfoA
// [内部子函数调用]: sub_4202fc
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_420613(void* arg1 @ ebp, uint16_t* arg2 @ esi, int32_t arg3 @ edi, int32_t* arg4)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    char* eax_1
    char ecx
    int16_t edx_1
    eax_1, edx_1, ecx = (*eax)()
    *eax_1 += eax_1.b
    *(arg1 + 0x6f) += ecx
    int32_t eflags
    __outsb(edx_1, *arg2, arg2, eflags)
    uint16_t* esi_1 = *(arg3 + (arg1 << 1) + 0x72) * 0x6d6f7246
    char* var_4 = eax_1
    void* esi_2 = __outsd(edx_1, *esi_1, esi_1, eflags)
    int32_t var_8 = 0
    int32_t* ebp_1 = &var_8
    void* var_20 = esi_2
    int32_t var_24 = arg3
    int32_t result
    enum SYSTEM_PARAMETERS_INFO_UPDATE_FLAGS var_28
    
    if (data_5316f1 != 0)
        result = 0
        
        if (__return_addr == 0x12340042 && arg4 != 0 && *arg4 u>= 0x28)
            var_28 = 0
            void pvParam
            
            if (SystemParametersInfoA(SPI_GETWORKAREA, 0, &pvParam, var_28) != 0)
                arg4[1] = 0
                arg4[2] = 0
                var_28 = 0
                arg4[3] = data_5316c4(var_28)
                var_28 = SPIF_UPDATEINIFILE
                arg4[4] = data_5316c4(var_28)
                var_28 = arg4
                __builtin_memcpy(&arg4[5], &pvParam, 0x10)
                enum SYSTEM_PARAMETERS_INFO_UPDATE_FLAGS esi_4 = var_28
                *(esi_4 + 0x24) = 1
                
                if (*esi_4 u>= 0x4c)
                    var_28 = &data_4206fc
                    lstrcpyA(esi_4 + 0x28, var_28)
                
                result.b = 1
    else
        eax_1.b = 5
        struct _EXCEPTION_REGISTRATION_RECORD** eax_2
        int32_t edi_1
        eax_2, ebp_1, edi_1 = sub_4202fc(eax_1.b, data_5316d4, sub_4206e7+5)
        data_5316d4 = eax_2
        var_28 = arg4
        result = data_5316d4(edi_1, var_28)
    *ebp_1
    return result
}
