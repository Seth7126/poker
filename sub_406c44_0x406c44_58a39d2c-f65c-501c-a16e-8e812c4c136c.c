// ============================================================
// 函数名称: sub_406c44
// 虚拟地址: 0x406c44
// WARP GUID: 58a39d2c-f65c-501c-a16e-8e812c4c136c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: TlsGetValue
// [内部子函数调用]: sub_406bf4
// [被调用的父级函数]: sub_452f08, sub_402968, sub_402824, sub_406403, sub_414da8, sub_4511d0, sub_4027e0, sub_494e64, sub_410138, sub_49492a, sub_402844, sub_4512fc, sub_40353c, sub_416cb4, sub_4101c8, sub_410198, sub_403844, sub_403668, sub_453040, sub_4027d4, sub_403898
// ============================================================

int32_tsub_406c44()
{
    // 第一条实际指令: uint32_t dwTlsIndex = data_5314d4
    uint32_t dwTlsIndex = data_5314d4
    
    if (data_5314d0 == 0)
        TEB* fsbase
        return *(fsbase->ThreadLocalStoragePointer + (dwTlsIndex << 2))
    
    int32_t eax_4 = TlsGetValue(dwTlsIndex)
    
    if (eax_4 != 0)
        return eax_4
    
    sub_406bf4()
    int32_t eax_2 = TlsGetValue(data_5314d4)
    
    if (eax_2 == 0)
        return data_5314e4
    
    return eax_2
}
