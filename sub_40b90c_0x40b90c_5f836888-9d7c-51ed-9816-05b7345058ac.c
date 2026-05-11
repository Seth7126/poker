// ============================================================
// 函数名称: sub_40b90c
// 虚拟地址: 0x40b90c
// WARP GUID: 5f836888-9d7c-51ed-9816-05b7345058ac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: VirtualQuery, GetModuleFileNameA
// [内部子函数调用]: sub_40b4ec, sub_404028, sub_405ae8, sub_409294, sub_403df8, sub_403e1c
// [被调用的父级函数]: sub_40bad8
// ============================================================

void*sub_40b90c(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_178 = ebx
    int32_t esi
    int32_t var_17c = esi
    char* var_174 = nullptr
    char* var_150 = nullptr
    char* var_158 = nullptr
    char* var_154 = nullptr
    char* var_8 = nullptr
    int32_t* var_180 = &var_4
    int32_t (* var_184)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx_1 = *(arg1 - 4)
    
    if (*(ebx_1 + 0x14) != 0)
        sub_405ae8(data_53066c, &var_8)
    else
        sub_405ae8(data_530a84, &var_8)
    
    int32_t esi_1 = *(ebx_1 + 0x18)
    MEMORY_BASIC_INFORMATION buffer
    VirtualQuery(*(ebx_1 + 0xc), &buffer, 0x1c)
    void* ebp_1
    
    if (buffer.State != 0x1000)
    label_40ba3f:
        int32_t var_170 = *(ebx_1 + 0xc)
        char var_16c_1 = 5
        char* var_168_1 = var_8
        char var_164_1 = 0xb
        int32_t var_160_1 = esi_1
        char var_15c_1 = 5
        int32_t* var_18c_1 = &var_170
        sub_405ae8(data_5308cc, &var_174)
        int32_t edx_7
        edx_7.b = 1
        char** eax_16
        eax_16, ebp_1 = sub_40b4ec(sub_408334+0xa4, edx_7, var_174, 2)
    else
        void filename
        
        if (GetModuleFileNameA(buffer.AllocationBase, &filename, 0x105) == 0)
            goto label_40ba3f
        
        int32_t var_14c = *(ebx_1 + 0xc)
        char var_148_1 = 5
        sub_404028(&var_154, &filename, 0x105)
        sub_409294(var_154, &var_150)
        char* var_144_1 = var_150
        char var_140_1 = 0xb
        char* var_13c_1 = var_8
        char var_138_1 = 0xb
        int32_t var_134_1 = esi_1
        char var_130_1 = 5
        int32_t* var_18c = &var_14c
        sub_405ae8(data_5307ec, &var_158)
        int32_t edx_5
        edx_5.b = 1
        char** eax_12
        eax_12, ebp_1 = sub_40b4ec(sub_408334+0xa4, edx_5, var_158, 3)
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_40bace
    sub_403df8(ebp_1 - 0x170)
    sub_403e1c(ebp_1 - 0x154, 3)
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}
