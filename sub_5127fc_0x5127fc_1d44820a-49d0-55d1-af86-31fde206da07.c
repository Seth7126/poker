// ============================================================
// 函数名称: sub_5127fc
// 虚拟地址: 0x5127fc
// WARP GUID: 1d44820a-49d0-55d1-af86-31fde206da07
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_50d454, sub_403e90, sub_404138, sub_50d4b4, sub_50d318, sub_403e4c, sub_408e1c, sub_404080, sub_50d2f4, sub_403df8, sub_403e1c, sub_50a4e0, sub_403010
// [被调用的父级函数]: sub_514cc4
// ============================================================

int32_t __convention("regparm")sub_5127fc(void* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_1 = &var_4
    int32_t i_3 = 4
    int32_t i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_3
        i_3 -= 1
    while (i != 1)
    *(esp_1 - 4) = i_3
    int32_t entry_ebx
    *(esp_1 - 8) = entry_ebx
    *(esp_1 - 0xc) = arg2
    *(esp_1 - 0x10) = arg3
    *(esp_1 - 0x14) = &var_4
    *(esp_1 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0x1c
    char* var_c
    
    if (*(arg1 + 0x344) == 0)
        sub_403e90(&var_c, "Client")
    else
        sub_403e90(&var_c, "Host")
    
    int32_t ebx = *(arg1 + 0x350)
    
    if (ebx s> 0 && ebx s<= 8)
        bool o_1 = unimplemented  {imul eax, ebx, 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (*(arg1 + ebx * 0x3a4 + 0x185) != 0)
            sub_404080(&var_c, "(E)")
    
    *(esp_1 - 0x20) = var_c
    *(esp_1 - 0x24) = &data_512b4c
    int32_t var_18
    sub_408e1c(ebx, &var_18)
    *(esp_1 - 0x28) = var_18
    sub_404138(&var_c, 3)
    *(esp_1 - 0x1c) = &data_512b58
    *(esp_1 - 0x20) = var_c
    *(esp_1 - 0x24) = "] syncs:"
    int32_t var_1c
    sub_408e1c(*(arg1 + 0x98), &var_1c)
    *(esp_1 - 0x28) = var_1c
    *(esp_1 - 0x2c) = &data_512b78
    sub_404138(&var_c, 5)
    void* esp_18 = esp_1 - 0x1c
    int32_t i_4 = *(arg1 + 0x348)
    int32_t var_10
    
    if (i_4 s> 0)
        int32_t i_2 = i_4
        int32_t edi = 1
        int32_t i_1
        
        do
            sub_403df8(&var_10)
            bool o_2 = unimplemented  {imul eax, edi, 0xe9}
            
            if (o_2)
                sub_403010()
                noreturn
            
            ebx.b = *(arg1 + edi * 0x3a4 - 0x50)
            
            if (ebx.b == 1)
                sub_403e90(&var_10, "client")
            
            bool o_3 = unimplemented  {imul eax, edi, 0xe9}
            
            if (o_3)
                sub_403010()
                noreturn
            
            if (ebx.b == 2)
                sub_403e90(&var_10, "host")
            
            bool o_4 = unimplemented  {imul eax, edi, 0xe9}
            
            if (o_4)
                sub_403010()
                noreturn
            
            if (ebx.b == 4)
                sub_403e90(&var_10, "disconnect")
            
            bool o_5 = unimplemented  {imul eax, edi, 0xe9}
            
            if (o_5)
                sub_403010()
                noreturn
            
            if (ebx.b == 0)
                sub_403e90(&var_10, "computer")
            
            *(esp_18 - 4) = &data_512bcc
            int32_t var_20
            sub_408e1c(edi, &var_20)
            *(esp_18 - 8) = var_20
            *(esp_18 - 0xc) = &data_512bd8
            int32_t var_24
            sub_408e1c(sub_50a4e0(edi), &var_24)
            *(esp_18 - 0x10) = var_24
            *(esp_18 - 0x14) = &data_512be4
            *(esp_18 - 0x18) = &data_512bf0
            *(esp_18 - 0x1c) = var_10
            sub_404138(&var_10, 7)
            bool o_6 = unimplemented  {imul eax, edi, 0xe9}
            
            if (o_6)
                sub_403010()
                noreturn
            
            if (*(arg1 + edi * 0x3a4 + 0x185) != 0)
                sub_404080(&var_10, " (E)")
            
            *(esp_18 - 0x10) = var_c
            *(esp_18 - 0x14) = &data_512c0c
            *(esp_18 - 0x18) = var_10
            sub_404138(&var_c, 3)
            esp_18 -= 8
            edi += 1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *data_530454
    int32_t var_28
    
    if (sub_50d2f4() != 0)
        if (sub_50d318(arg1) == 0)
            sub_404080(&var_c, "\rnochef.\r")
        else
            sub_404080(&var_c, "\rCHEF!\r")
    else if (*(arg1 + 0x344) == 0)
        sub_403e90(&var_c, "CHECKER:\r")
        
        if (sub_50d454(*(arg1 + 0xc)) != 0)
            sub_404080(&var_c, "ERRRRRRRRRROR!!\r")
        else
            sub_404080(&var_c, "NO-Error\r")
        
        if (sub_50d4b4(*(arg1 + 0xc)) != 0)
            sub_404080(&var_c, "error2...........!!\r")
        else
            sub_404080(&var_c, "..\r")
    else
        sub_403e90(&var_c, "CHECKER:\r")
        *(esp_18 - 4) = var_c
        *(esp_18 - 8) = "cachecount: "
        sub_408e1c(*(*(arg1 + 0xc) + 0x3a70), &var_28)
        *(esp_18 - 0xc) = var_28
        *(esp_18 - 0x10) = &data_512c0c
        sub_404138(&var_c, 4)
    
    sub_403e4c(arg1 + 0x4c0c, var_c)
    *(esp_18 + 8)
    fsbase->NtTib.ExceptionList = *esp_18
    *(esp_18 + 8) = sub_512b0e
    sub_403e1c(&var_28, 5)
    return sub_403e1c(&var_10, 2)
}
