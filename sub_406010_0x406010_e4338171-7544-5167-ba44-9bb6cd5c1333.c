// ============================================================
// 函数名称: sub_406010
// 虚拟地址: 0x406010
// WARP GUID: e4338171-7544-5167-ba44-9bb6cd5c1333
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLastError, ReadFile
// [内部子函数调用]: sub_402844
// [被调用的父级函数]: sub_4691b4, sub_52a8cc, sub_468d90, sub_4e6028, sub_4dbf70, sub_46f4fc, sub_4cbd28, sub_46f5a0, sub_4689cc, sub_5205d0, sub_47be18, sub_524d14, sub_4ecd3c, sub_4b7714, sub_4683f7
// ============================================================

void* __convention("regparm")sub_406010(int32_t* arg1, uint8_t* arg2)
{
    // 第一条实际指令: int32_t ecx = arg1[1]
    int32_t ecx = arg1[1]
    enum WIN32_ERROR eax_2
    
    if (ecx == 0xd7b1 || ecx == 0xd7b3)
        uint32_t numberOfBytesRead = 0
        BOOL eax = ReadFile(*arg1, arg2, arg1[2], &numberOfBytesRead, nullptr)
        
        if (eax != 1)
            eax_2 = GetLastError()
        else
            if (numberOfBytesRead == arg1[2])
                return eax - 1
            
            eax_2 = ERROR_TOO_MANY_SEMAPHORES
    else
        eax_2 = ERROR_TOO_MANY_SEM_REQUESTS
    
    return sub_402844(eax_2)
}
