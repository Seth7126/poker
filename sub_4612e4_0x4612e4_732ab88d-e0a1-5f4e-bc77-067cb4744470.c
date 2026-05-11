// ============================================================
// 函数名称: sub_4612e4
// 虚拟地址: 0x4612e4
// WARP GUID: 732ab88d-e0a1-5f4e-bc77-067cb4744470
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_461360, sub_461548, sub_46143c, sub_461314, sub_4616b4, sub_461760, sub_46180c, sub_461334, sub_4615ec
// ============================================================

int32_t* __convention("regparm")sub_4612e4(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t* result = arg1[5]
    int32_t* result = arg1[5]
    char* ecx = *result
    *result += 1
    *ecx = arg2
    int32_t temp0 = result[1]
    result[1] -= 1
    
    if (temp0 == 1)
        result = result[3]()
        
        if (result == 0)
            *(*arg1 + 0x14) = 0x16
            return (**arg1)()
    
    return result
}
