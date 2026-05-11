// ============================================================
// 函数名称: sub_404410
// 虚拟地址: 0x404410
// WARP GUID: 6727273f-b16d-59c5-b81c-79d4e1278953
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ebc, sub_402d00, sub_403df8
// [被调用的父级函数]: sub_4d8208
// ============================================================

int32_t* __convention("regparm")sub_404410(char arg1, int32_t arg2, char** arg3)
{
    // 第一条实际指令: int32_t* result = arg3
    int32_t* result = arg3
    sub_403df8(result)
    
    if (arg2 s<= 0)
        return result
    
    char* eax_1
    int32_t ecx
    eax_1, ecx = sub_403ebc(arg2)
    *arg3 = eax_1
    ecx.b = arg1
    return sub_402d00(eax_1, arg2, ecx)
}
