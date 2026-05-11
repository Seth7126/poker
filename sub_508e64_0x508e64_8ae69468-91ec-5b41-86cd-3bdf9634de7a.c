// ============================================================
// 函数名称: sub_508e64
// 虚拟地址: 0x508e64
// WARP GUID: 8ae69468-91ec-5b41-86cd-3bdf9634de7a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b4c, sub_403010
// [被调用的父级函数]: sub_514ef8
// ============================================================

int32_t __convention("regparm")sub_508e64(int32_t arg1)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    void var_80
    __builtin_memcpy(&var_80, arg1, 0x7c)
    void* esi_1 = data_530598
    char var_6e
    *data_52fee0 = var_6e
    char var_75
    void* eax
    eax.b = var_75
    
    if (eax.b s>= 0)
        *(esi_1 + 0x14) = sx.d(eax.b)
    
    char var_74
    eax.b = var_74
    
    if (eax.b s>= 0)
        *(esi_1 + 0x18) = sx.d(eax.b)
    
    char var_73
    eax.b = var_73
    
    if (eax.b s>= 0)
        *(esi_1 + 0x1c) = sx.d(eax.b)
    
    char var_72
    eax.b = var_72
    
    if (eax.b s>= 0)
        *(*data_5301f4 + 0x20084) = sx.d(eax.b)
    
    char var_71
    
    if (var_71 == 1)
        int32_t eax_2 = *(esi_1 + 0x14)
        
        if (eax_2 == 1)
            *(esi_1 + 0x30) = 5
        else if (eax_2 == 2)
            *(esi_1 + 0x30) = 0xa
        else if (eax_2 == 3)
            *(esi_1 + 0x30) = 0x10
        else if (eax_2 == 4)
            *(esi_1 + 0x30) = 0x16
        
        if (*(esi_1 + 0x14) == 5)
            *(esi_1 + 0x30) = 0x1c
        
        if (*(esi_1 + 0x14) == 6)
            *(esi_1 + 0x30) = 0x2c
        
        int32_t eax_3 = *(esi_1 + 0x18)
        
        if (eax_3 == 1)
            *(esi_1 + 0x2c) = 0x640
            *(esi_1 + 0x34) = 0xaf0
        else if (eax_3 == 2)
            *(esi_1 + 0x2c) = 0x4b0
            *(esi_1 + 0x34) = 0x6a4
        else if (eax_3 == 3)
            *(esi_1 + 0x2c) = 0x320
            *(esi_1 + 0x34) = 0x3e8
        else if (eax_3 == 4)
            *(esi_1 + 0x2c) = 0x1f4
            *(esi_1 + 0x34) = 0x26c
        
        if (*(esi_1 + 0x18) == 5)
            *(esi_1 + 0x2c) = 0x8c
            *(esi_1 + 0x34) = 0x190
        
        if (*(esi_1 + 0x18) == 6)
            *(esi_1 + 0x2c) = 0x14
            *(esi_1 + 0x34) = 0x32
        
        if (*(*data_5301f4 + 4) == 7)
            if (*(esi_1 + 0x18) == 4)
                *(esi_1 + 0x2c) = sub_402b4c(float.t(*(esi_1 + 0x2c)) * data_509018)
                *(esi_1 + 0x34) = sub_402b4c(float.t(*(esi_1 + 0x34)) * data_509018)
            
            *(esi_1 + 0x2c)
            bool o_1 = unimplemented  {imul eax, dword [esi+0x2c], 0x1}
            
            if (o_1)
                sub_403010()
                noreturn
            
            *(esi_1 + 0x2c) = sub_402b4c(float.t(*(esi_1 + 0x2c)))
            *(esi_1 + 0x34)
            bool o_2 = unimplemented  {imul eax, dword [esi+0x34], 0x1}
            
            if (o_2)
                sub_403010()
                noreturn
            
            *(esi_1 + 0x34) = sub_402b4c(float.t(*(esi_1 + 0x34)))
    
    return entry_result
}
