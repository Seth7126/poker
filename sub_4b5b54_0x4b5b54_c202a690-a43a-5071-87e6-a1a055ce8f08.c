// ============================================================
// 函数名称: sub_4b5b54
// 虚拟地址: 0x4b5b54
// WARP GUID: c202a690-a43a-5071-87e6-a1a055ce8f08
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_403e4c, sub_4b5a84, sub_4b5a34, sub_403df8
// [被调用的父级函数]: sub_4b62cc
// ============================================================

void* __convention("regparm")sub_4b5b54(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* esp_1 = &var_14
    
    if (arg2.b != 0)
        void var_24
        esp_1 = &var_24
        arg1 = sub_4033d0(arg3, arg2)
    
    *(esp_1 - 4) = &var_4
    *(esp_1 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0xc
    *(esp_1 - 0x10) = arg5
    *(esp_1 - 0x14) = arg4
    sub_4b5a34(arg3, &var_8)
    void* ebp_1
    void* edi_2
    ebp_1, edi_2 = sub_4b5a84(arg1, 0, var_8)
    sub_403e4c(edi_2 + 0x10, *(ebp_1 + 0x10))
    sub_403e4c(edi_2 + 0x14, *(ebp_1 + 0xc))
    *(esp_1 - 0xc)
    fsbase->NtTib.ExceptionList = *(esp_1 - 0x14)
    *(esp_1 - 0xc) = sub_4b5bcd
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}
