// ============================================================
// 函数名称: sub_40c258
// 虚拟地址: 0x40c258
// WARP GUID: 9794b65f-72eb-551f-b2af-9c552706e524
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCPInfo, GetSystemMetrics, GetThreadLocale
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40c310
// ============================================================

int32_tsub_40c258()
{
    // 第一条实际指令: data_5315b4 = 0x409
    data_5315b4 = 0x409
    data_5315b8 = 9
    data_5315ba = 1
    uint32_t eax = GetThreadLocale()
    
    if (eax != 0)
        data_5315b4 = eax
    
    if (eax.w != 0)
        data_5315b8 = eax.w & 0x3ff
        data_5315ba = eax.w u>> 0xa
    
    int32_t eax_3
    eax_3.b = GetSystemMetrics(SM_MIDEASTENABLED) != 0
    data_5315bd = eax_3.b
    int32_t result = GetSystemMetrics(SM_DBCSENABLED)
    int32_t ebx
    ebx.b = result != 0
    data_5315bc = ebx.b
    
    if (ebx.b != 0)
        CPINFO cPInfo
        result = GetCPInfo(0, &cPInfo)
        
        for (int32_t i = 0; i s< 0xc; i += 2)
            var_1e
            result.b = *(&var_1e + i)
            var_1d
            result.b |= *(&var_1d + i)
            
            if (result.b == 0)
                break
            
            result.b = *(&var_1e + i)
            ebx.b = *(&var_1d + i)
            char temp0_1 = ebx.b
            ebx.b -= result.b
            
            if (temp0_1 u>= result.b)
                ebx += 1
                char var_28_1 = result.b
                char j
                
                do
                    result.b = var_28_1
                    result &= 0xff
                    data_52e118 |= 1 << (result u% 0x20)
                    var_28_1 += 1
                    j = ebx.b
                    ebx.b -= 1
                while (j != 1)
    
    return result
}
