// ============================================================
// 函数名称: sub_447f54
// 虚拟地址: 0x447f54
// WARP GUID: 926e7b72-9c5a-5989-ab61-b794f7411059
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: OemToCharA, CharLowerA, GetModuleFileNameA, LoadIconA
// [内部子函数调用]: sub_4481cc, sub_4033d0, sub_415d18, sub_404028, sub_409418, sub_4030a0, sub_403428, sub_41f53c, sub_41f90c, sub_40c1f0, sub_40c218
// [被调用的父级函数]: sub_447f44, sub_435eac
// ============================================================

int32_t* __convention("regparm")sub_447f54(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_10c = ebx
    int32_t esi
    int32_t var_110 = esi
    int32_t* esp_1 = &var_110
    int32_t* ecx
    
    if (arg2.b != 0)
        void var_120
        esp_1 = &var_120
        arg1 = sub_4033d0(ecx, arg2)
    
    char var_5 = arg2.b
    int32_t ecx_1
    int32_t edx
    ecx_1, edx = sub_415d18(arg1, 0, ecx)
    arg1[0xa].b = 0
    edx.b = 1
    int32_t eax_2
    int32_t ecx_2
    int32_t edx_1
    eax_2, ecx_2, edx_1 = sub_4030a0(ecx_1, edx)
    arg1[0x20] = eax_2
    edx_1.b = 1
    int32_t eax_4
    int32_t edx_2
    eax_4, edx_2 = sub_4030a0(ecx_2, edx_1)
    arg1[0x26] = eax_4
    arg1[0x14] = 0
    arg1[0x1d] = 0
    arg1[0x13] = 0x80000018
    arg1[0x1a] = 0x1f4
    arg1[0x1b].b = 1
    arg1[0x1c] = 0
    arg1[0x19] = 0x9c4
    arg1[0x1e].b = 0
    *(arg1 + 0x8d) = 1
    edx_2.b = 1
    int32_t* eax_5 = sub_41f53c(sub_41799a+0x222, edx_2)
    arg1[0x22] = eax_5
    *(esp_1 - 4) = &data_4480e0
    *(esp_1 - 8) = *data_53027c
    LoadIconA()
    sub_41f90c(eax_5)
    void* eax_10 = arg1[0x22]
    *(eax_10 + 0xc) = arg1
    *(eax_10 + 8) = sub_449b10
    *(esp_1 - 4) = 0x100
    void var_105
    *(esp_1 - 8) = &var_105
    *(esp_1 - 0xc) = *data_53027c
    GetModuleFileNameA()
    *(esp_1 - 4) = &var_105
    *(esp_1 - 8) = &var_105
    void* eax_13 = sub_40c1f0(OemToCharA(), 0x5c)
    
    if (eax_13 != 0)
        sub_409418(&var_105, eax_13 + 1)
    
    void* eax_16 = sub_40c218(&var_105, 0x2e)
    
    if (eax_16 != 0)
        *eax_16 = 0
    
    void var_104
    *(esp_1 - 4) = &var_104
    CharLowerA()
    void* esp_13 = esp_1
    sub_404028(&arg1[0x1f], &var_105, 0x100)
    
    if (*data_52fef4 == 0)
        ebp_1 = sub_4481cc(arg1)
    
    *(arg1 + 0x49) = 1
    *(arg1 + 0x4a) = 1
    *(arg1 + 0x4b) = 1
    *(arg1 + 0x8e) = 1
    arg1[0x24] = 0
    
    if (*(ebp_1 - 1) != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_13
        esp_13 += 0x10
    
    *esp_13
    *(esp_13 + 4)
    *ebp_1
    return arg1
}
