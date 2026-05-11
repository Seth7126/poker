// ============================================================
// 函数名称: sub_4abaec
// 虚拟地址: 0x4abaec
// WARP GUID: 02f80518-6a6c-5f8a-ba9c-9ee39899c4a6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_403430, sub_4030c0, sub_40cc98
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4abaec(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = sub_403430(arg1, arg2)
    int32_t ecx = sub_403430(arg1, arg2)
    int32_t eax = arg1[5]
    
    if (eax != 0)
        (*data_52ffe0)(eax)
        int32_t eax_3 = arg1[5]
        (*data_53096c)(eax_3)
        ecx = eax_3
        arg1[5] = 0
    
    if (arg1[2] != 0)
        ecx = sub_40cc98(&arg1[2])
    
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_4030c0(ecx, edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
