// ============================================================
// 函数名称: sub_415bc4
// 虚拟地址: 0x415bc4
// WARP GUID: a4dc94cc-c072-59a2-a9a3-11d7fae9a744
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CloseHandle
// [内部子函数调用]: sub_415cb4, sub_403420, sub_415a94, sub_415cac, sub_403430, sub_4030c0
// [被调用的父级函数]: sub_496e78
// ============================================================

int32_t __convention("regparm")sub_415bc4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = sub_403430(arg1, arg2)
    int32_t ecx = sub_403430(arg1, arg2)
    
    if (*(arg1 + 0xf) == 0 && *(arg1 + 0xd) == 0)
        sub_415cac(arg1)
        ecx = sub_415cb4(arg1)
    
    HANDLE hObject = arg1[1]
    
    if (hObject != 0)
        ecx = CloseHandle(hObject)
    
    int32_t edx
    edx.b = arg2.b & 0xfc
    sub_4030c0(ecx, edx)
    int32_t result = sub_415a94()
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
